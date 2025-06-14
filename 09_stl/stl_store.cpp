#include <iostream> 
#include <vector>
#include <string>
#include <deque>
#include <ctime>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

using namespace std;

struct Product {
    int productID;
    string name;
    string category;
};

struct Order {
    int orderID;
    int ProductID;
    int quantity;
    string customerId;
    time_t orderDate;
};

int main() {
    vector<Product> products = {
    {101, "Laptop", "Electronics"},
    {102, "Smart Phone", "Electronics"},
    {103, "Coffe Maker", "kitchen"},
    {104, "Blender", "kitchen"},
    {105, "Desk Lamp", "Home"},
    };

    deque<string> recentCustomres = {"C001", "C002", "C003"};

    recentCustomres.push_back("C004");
    recentCustomres.push_front("C005");

    list<Order> orderHistory;

    orderHistory.push_back({1, 101, 1, "Coo1", time(0)});
    orderHistory.push_back({2, 102, 2, "Coo2", time(0)});
    orderHistory.push_back({3, 101, 1, "Coo3", time(0)});

    set<string> categories;
    for(const auto &product: products){
        categories.insert(product.category);
    }

    map<int, int> productStock = {
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 5},
        {105, 7},
    };

    multimap<string, Order> customerOrders;
    for(const auto &order: orderHistory){
        customerOrders.insert({order.customerId, order});
    }

    unordered_map<string, string> customerData = {
        {"C001", "Alice"},
        {"C002", "Chesta"},
        {"C003", "Uday"},
        {"C004", "Max"},
        {"C005", "Harry"},
    };

    unordered_set<int> uniqueProductIDs;
    for(const auto &product: products){
        uniqueProductIDs.insert(product.productID);
    }
    

    return 0;
};



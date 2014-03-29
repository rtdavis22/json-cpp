#include "json.h"

#include <iostream>

using std::cout;
using std::endl;

int main() {
    // Create a JSON object and insert some key/value pairs in it.
    JsonObject object1;
    object1.insert(JsonString("a"), JsonNumber<int>(1));
    object1.insert(JsonString("b"), JsonString("d"));
    object1.insert(JsonString("c"), JsonBool(false));
    cout << "object1: " << object1.serialize() << endl;

    // Create another object and insert the previous object in it.
    JsonObject object2;
    object2.insert(JsonString("object1"), object1);
    cout << "object2: " << object2.serialize() << endl;

    // Create an array and append the previous 2 objects.
    JsonArray array1;
    array1.append(object1);
    array1.append(object2);
    cout << "array1:" << array1.serialize() << endl;
}

#ifndef MAP_TEMPLATE_H
#define MAP_TEMPLATE_H

#include <map>

//Wyjątki
class key_exist{};
//=======

template <typename K, typename V> class map_template
{
public:
    map_template();

    void Add(const K& key, const V& value)
    {
        if (database.count(key) > 0) //jeśli istnieje chociaż jeden element o tym kluczu
        {
            throw key_exist();
        }

        database.insert(std::make_pair(key, value));
    };

    V* Find(K key)
    {
        //return database.at(key);
        return &(database.find(key)->second);
    };

private:
    std::map<K, V> database;
};



#endif // MAP_TEMPLATE_H

// структура айтемов хэш таблицы
typedef struct {
    char* key;
    char* value;
} ht_item;

// структура самой хэш таблицы в которой хранится информация о размере и количество элементов
typedef struct 
{
    int size;
    int count;
    ht_item** items;
} ht_hash_table;

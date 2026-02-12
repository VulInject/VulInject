DICTIONARY *dictionary_create_view(DICTIONARY *master) {

DICTIONARY *dict = dictionary_create_internal(master->options, master->stats,
master->value_aral ? aral_element_size(master->value_aral) : 0);

dict->master = master;

dictionary_hooks_allocate(master);

if(unlikely(__atomic_load_n(&master->hooks->links, __ATOMIC_RELAXED)) < 1)
fatal("DICTIONARY: attempted to create a view that has %d links", master->hooks->links);

dict->hooks = master->hooks;
__atomic_add_fetch(&master->hooks->links, 1, __ATOMIC_ACQUIRE);

dict->creation_function = function;
dict->creation_file = file;
dict->creation_line = line;

DICTIONARY_STATS_DICT_CREATIONS_PLUS1(dict);
return dict;
}
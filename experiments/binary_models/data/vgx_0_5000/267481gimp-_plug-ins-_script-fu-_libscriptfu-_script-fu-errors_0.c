debug_list (scheme       *sc,
pointer       list,
const char   *format,
const guint   num_elements)
{
g_return_if_fail (num_elements == sc->vptr->list_length (sc, list));
g_debug ("list has %d elements", num_elements);
if (num_elements > 0)
{
for (int j = 0; j < num_elements; ++j)
{
pointer v_element = sc->vptr->pair_car (list);

g_debug (format,
sc->vptr->string_value ( v_element ));
list = sc->vptr->pair_cdr (list);
}
}
}
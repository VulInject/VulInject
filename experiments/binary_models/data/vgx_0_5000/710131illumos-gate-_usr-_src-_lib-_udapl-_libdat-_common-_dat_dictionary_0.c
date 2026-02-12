DAT_RETURN
dat_dictionary_remove(
IN  DAT_DICTIONARY *p_dictionary,
IN  DAT_DICTIONARY_ENTRY *p_entry,
IN  const DAT_PROVIDER_INFO *key,
OUT DAT_DICTIONARY_DATA *p_data)
{
DAT_DICTIONARY_NODE *cur_node, *prev_node, *next_node;
DAT_RETURN status;

dat_os_assert(NULL != p_dictionary);
dat_os_assert(NULL != p_entry);

status = DAT_ERROR(DAT_NAME_NOT_FOUND, 0);

for (cur_node = p_dictionary->head->next;
p_dictionary->tail != cur_node;
cur_node = cur_node->next) {
if (DAT_TRUE == dat_dictionary_key_is_equal(&cur_node->key,
key)) {
if (NULL != p_data) {
*p_data = cur_node->data;
}

prev_node = cur_node->prev;
next_node = cur_node->next;

prev_node->next = next_node;
next_node->prev = prev_node;

*p_entry = cur_node;

p_dictionary->size--;

status = DAT_SUCCESS;
goto bail;
}
}

bail:
return (status);
}
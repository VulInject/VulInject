int menu_get_zipl_boot_index(const char *menu_data)
{
size_t len;
int entry;
bool valid_entries[MAX_BOOT_ENTRIES] = {false};
uint16_t zipl_flag = *(uint16_t *)(menu_data - ZIPL_FLAG_OFFSET);
uint16_t zipl_timeout = *(uint16_t *)(menu_data - ZIPL_TIMEOUT_OFFSET);

if (flag == QIPL_FLAG_BM_OPTS_ZIPL) {
if (!zipl_flag) {
return 0; 
}

timeout = zipl_timeout * 1000;
}


sclp_print("s390-ccw zIPL Boot Menu\n\n");
menu_data += strlen(menu_data) + 1;


while (*menu_data) {
len = strlen(menu_data);
entry = zipl_print_entry(menu_data, len);
menu_data += len + 1;

valid_entries[entry] = true;

if (entry == 0) {
sclp_print("\n");
}
}

sclp_print("\n");
return get_boot_index(valid_entries);
}
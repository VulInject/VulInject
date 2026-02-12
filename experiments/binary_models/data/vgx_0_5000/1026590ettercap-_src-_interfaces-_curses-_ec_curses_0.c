static void read_pcapfile(const char *path, char *file)
{
char pcap_errbuf[PCAP_ERRBUF_SIZE];

DEBUG_MSG("read_pcapfile %s/%s", path, file);

SAFE_CALLOC(EC_GBL_OPTIONS->pcapfile_in, strlen(path)+strlen(file)+2, sizeof(char));

snprintf(EC_GBL_OPTIONS->pcapfile_in, strlen(path)+strlen(file)+2, "%s/%s", path, file);


if (is_pcap_file(EC_GBL_OPTIONS->pcapfile_in, pcap_errbuf) != E_SUCCESS) {
ui_error("%s", pcap_errbuf);
SAFE_FREE(EC_GBL_OPTIONS->pcapfile_in);
return;
}


EC_GBL_OPTIONS->silent = 1;
EC_GBL_OPTIONS->unoffensive = 1;
EC_GBL_OPTIONS->write = 0;
EC_GBL_OPTIONS->read = 1;


wdg_exit();
}
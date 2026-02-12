void device_dashboard_fn(struct mg_connection *, int, void *, void *);


void app_main(void) {

esp_vfs_spiffs_conf_t conf = {
.base_path = FS_ROOT, .max_files = 20, .format_if_mount_failed = true};
int res = esp_vfs_spiffs_register(&conf);
MG_INFO(("FS %s, %d", conf.base_path, res));
mg_file_printf(&mg_fs_posix, FS_ROOT "/hello.txt", "%s", "hello from ESP");



void wifi_init(const char *ssid, const char *pass);
wifi_init(WIFI_SSID, WIFI_PASS);


struct mg_mgr mgr;
mg_log_set(MG_LL_DEBUG);  
mg_mgr_init(&mgr);
MG_INFO(("Mongoose v%s on %s", MG_VERSION, s_listening_url));
mg_http_listen(&mgr, s_listening_url, device_dashboard_fn, NULL);
for (;;) mg_mgr_poll(&mgr, 1000);  
}
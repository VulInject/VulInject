int main(void) {
gpio_output(LED);               
uart_init(UART_DEBUG, 115200);  
ethernet_init();                

MG_INFO(("Chip revision: %c, max cpu clock: %u MHz", chiprev(),
(chiprev() == 'V') ? 480 : 400));
MG_INFO(("Starting, CPU freq %g MHz", (double) SystemCoreClock / 1000000));

struct mg_mgr mgr;        
mg_mgr_init(&mgr);        
mg_log_set(MG_LL_DEBUG);  




struct mg_tcpip_driver_stm32h_data driver_data = {.mdc_cr = 4};
struct mg_tcpip_if mif = {.mac = GENERATE_LOCALLY_ADMINISTERED_MAC(),
.driver = &mg_tcpip_driver_stm32h,
.driver_data = &driver_data};
mg_tcpip_init(&mgr, &mif);
mg_timer_add(&mgr, BLINK_PERIOD_MS, MG_TIMER_REPEAT, timer_fn, &mif);

MG_INFO(("MAC: %M. Waiting for IP...", mg_print_mac, mif.mac));
while (mif.state != MIP_STATE_READY) {
mg_mgr_poll(&mgr, 0);
}

MG_INFO(("Initialising application..."));
extern void device_dashboard_fn(struct mg_connection *, int, void *, void *);
mg_http_listen(&mgr, "http:

MG_INFO(("Starting event loop"));
for (;;) {
mg_mgr_poll(&mgr, 0);
}

return 0;
}
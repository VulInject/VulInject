static size_t w5500_tx(const void *buf, size_t buflen, struct mg_tcpip_if *ifp) {
struct mg_tcpip_spi *s = (struct mg_tcpip_spi *) ifp->driver_data;
uint16_t n = 0, len = (uint16_t) buflen;
while (n < len) n = w5500_r2(s, W5500_S0, 0x20);      
uint16_t ptr = w5500_r2(s, W5500_S0, 0x24);           
w5500_wn(s, W5500_TX0, ptr, (void *) buf, len);       
w5500_w2(s, W5500_S0, 0x24, (uint16_t) (ptr + len));  
w5500_w1(s, W5500_S0, 1, 0x20);                       
for (int i = 0; i < 40; i++) {
uint8_t ir = w5500_r1(s, W5500_S0, 2);  
if (ir == 0) continue;

w5500_w1(s, W5500_S0, 2, ir);  
if (ir & 8) len = 0;           
if (ir & (16 | 8)) break;      
}
return len;
}
static void            
vxgetlink(void)
{
int n, k;

GO_WINDOW(3);
vx_connectors = inw(BASE + VX_W3_RESET_OPT) & 0x7f;
for (n = 0, k = 0; k < VX_CONNECTORS; k++) {
if (vx_connectors & conn_tab[k].bit) {
if (n > 0) {
printf("/");
}
printf(conn_tab[k].name);
n++;
}
}
if (vx_connectors == 0) {
printf("no connectors!");
return;
}
GO_WINDOW(3);
vx_connector = (inl(BASE + VX_W3_INTERNAL_CFG) 
& INTERNAL_CONNECTOR_MASK) 
>> INTERNAL_CONNECTOR_BITS;
if (vx_connector & 0x10) {
vx_connector &= 0x0f;
printf("[*%s*]", conn_tab[vx_connector].name);
printf(": disable 'auto select' with DOS util!");
} else {
printf("[*%s*]", conn_tab[vx_connector].name);
}
}
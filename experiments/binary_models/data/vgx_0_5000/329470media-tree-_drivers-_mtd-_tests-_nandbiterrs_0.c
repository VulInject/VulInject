module_param(mode, int, S_IRUGO);
MODULE_PARM_DESC(mode, "0=incremental errors, 1=overwrite test");

static unsigned max_overwrite = 10000;

static loff_t   offset;     
static unsigned eraseblock; 


static unsigned subsize;  
static unsigned subcount; 

static struct mtd_info *mtd;   

static uint8_t *wbuffer; 
static uint8_t *rbuffer; 


static uint8_t hash(unsigned offset)
{
unsigned v = offset;
unsigned char c;
v ^= 0x7f7edfd3;
v = v ^ (v >> 3);
v = v ^ (v >> 5);
v = v ^ (v >> 13);
c = v & 0xFF;

c = (c & 0x0F) << 4 | (c & 0xF0) >> 4;
c = (c & 0x33) << 2 | (c & 0xCC) >> 2;
c = (c & 0x55) << 1 | (c & 0xAA) >> 1;
return c;
}
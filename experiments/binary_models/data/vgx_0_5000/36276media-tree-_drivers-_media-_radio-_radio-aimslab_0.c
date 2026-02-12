static int rtrack_s_mute_volume(struct radio_isa_card *isa, bool mute, int vol)
{
struct rtrack *rt = container_of(isa, struct rtrack, isa);
int curvol = rt->curvol;

if (mute) {
outb(0xd0, isa->io);	
return 0;
}
if (vol == 0) {			
outb(0x48, isa->io);	
msleep(curvol * 3);	
} else if (curvol < vol) {
outb(0x98, isa->io);	
for (; curvol < vol; curvol++)
mdelay(3);
} else if (curvol > vol) {
outb(0x58, isa->io);	
for (; curvol > vol; curvol--)
mdelay(3);
}
outb(0xd8, isa->io);		
rt->curvol = vol;
return 0;
}
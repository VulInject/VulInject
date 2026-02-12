static unsigned short
read_word(const void __user *buf, int offset, int mode)
{
unsigned short c;
if (mode & SNDRV_SFNT_SAMPLE_8BITS) {
unsigned char cc;
get_user(cc, (unsigned char __user *)buf + offset);
c = cc << 8; 
} else {
get_user(c, (unsigned short __user *)buf + offset);
unsigned short cc;
get_user(cc, (unsigned short __user *)buf + offset);
c = swab16(cc);
}
if (mode & SNDRV_SFNT_SAMPLE_UNSIGNED)
c ^= 0x8000; 
return c;
}
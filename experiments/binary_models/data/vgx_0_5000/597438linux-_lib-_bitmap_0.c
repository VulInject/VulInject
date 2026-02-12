void bitmap_remap(unsigned long *dst, const unsigned long *src,
const unsigned long *old, const unsigned long *new,
unsigned int nbits)
{
unsigned int oldbit, w;

if (dst == src)		
return;
bitmap_zero(dst, nbits);

w = bitmap_weight(new, nbits);
for_each_set_bit(oldbit, src, nbits) {
int n = bitmap_pos_to_ord(old, oldbit, nbits);

if (n < 0 || w == 0)
set_bit(oldbit, dst);	
else
set_bit(find_nth_bit(new, nbits, n % w), dst);
}
}
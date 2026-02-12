_cairo_uint32x32_64_mul (uint32_t a, uint32_t b)
{
cairo_uint64_t  s;

uint16_t	ah, al, bh, bl;
uint32_t	r0, r1, r2, r3;

al = uint32_lo (a);
ah = uint32_hi (a);
bl = uint32_lo (b);
bh = uint32_hi (b);

r0 = (uint32_t) al * bl;
r1 = (uint32_t) al * bh;
r2 = (uint32_t) ah * bl;
r3 = (uint32_t) ah * bh;

r1 += uint32_hi(r0);    
r1 += r2;		    
if (r1 < r2)	    
r3 += uint32_carry16;

s.hi = r3 + uint32_hi(r1);
s.lo = (uint32_lo (r1) << 16) + uint32_lo (r0);
return s;
}
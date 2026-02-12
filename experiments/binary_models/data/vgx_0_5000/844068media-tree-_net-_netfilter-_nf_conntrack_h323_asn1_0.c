static int decode_int(bitstr_t *bs, const struct field_t *f,
char *base, int level)
{
unsigned int len;

PRINT("%*.s%s", level * TAB_SIZE, " ", f->name);

switch (f->sz) {
case BYTE:		
BYTE_ALIGN(bs);
bs->cur++;
break;
case WORD:		
BYTE_ALIGN(bs);
bs->cur += 2;
break;
case CONS:		
len = get_bits(bs, 2) + 1;
BYTE_ALIGN(bs);
if (base && (f->attr & DECODE)) {	
unsigned int v = get_uint(bs, len) + f->lb;
PRINT(" = %u", v);
*((unsigned int *)(base + f->offset)) = v;
}
bs->cur += len;
break;
case UNCO:
BYTE_ALIGN(bs);
CHECK_BOUND(bs, 2);
len = get_len(bs);
bs->cur += len;
break;
default:		
INC_BITS(bs, f->sz);
break;
}

PRINT("\n");

CHECK_BOUND(bs, 0);
return H323_ERROR_NONE;
}
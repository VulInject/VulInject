local void gen_codes (
ct_data *tree,
int max_code,
ushf *bl_count)
{
ush next_code[MAX_BITS+1]; 
unsigned code = 0;         
int bits;                  
int n;                     


for (bits = 1; bits <= MAX_BITS; bits++) {
code = (code + bl_count[bits-1]) << 1;
next_code[bits] = (ush)code;
}

Assert (code + bl_count[MAX_BITS]-1 == (1<<MAX_BITS)-1,
"inconsistent bit counts");
Tracev((stderr,"\ngen_codes: max_code %d ", max_code));

for (n = 0;  n <= max_code; n++) {
int len = tree[n].Len;
if (len == 0) continue;

tree[n].Code = (ush)bi_reverse(next_code[len]++, len);

Tracecv(tree != static_ltree, (stderr,"\nn %3d %c l %2d c %4x (%x) ",
n, (isgraph(n) ? n : ' '), len, tree[n].Code, next_code[len]-1));
}
}
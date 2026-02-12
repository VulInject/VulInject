const char *
code_to_adobename(long code)
{
unsigned int n, n1 = 0, n2 = current_table_len - 1;
char *p;


if (current_encoding_scheme == encFontSpecific)
{
p = (char *)mymalloc(11);
sprintf(p, ".%c0x%lx", (code >= 0x1000000) ? 'g' : 'c',
(code & 0xFFFFFF));
return p;
}

while (n1 <= n2)
{
n = (n1 + n2) / 2;
if (code < current_table[n].code)
n2 = n - 1;
else if (code > current_table[n].code)
n1 = n + 1;
else
return current_table[n].adobename;
}

p = (char *)mymalloc(11);
sprintf(p, ".%c0x%lx", (code >= 0x1000000) ? 'g' : 'c',
(code & 0xFFFFFF));
return p;    
}
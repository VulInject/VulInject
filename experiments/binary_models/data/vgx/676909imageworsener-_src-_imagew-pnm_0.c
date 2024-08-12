static int FUN1(struct VAR1 *VAR2, char *VAR3, int VAR4)
{
iw_byte VAR5;
int VAR6 = 0;
int VAR7 = 0;

while(1) {
if(!FUN2(VAR2, &VAR5)) goto VAR8;

if(VAR5==0x0a) { 
break;
}

if(VAR7 < VAR4-1) {
VAR3[VAR7++] = (char)VAR5;
}

}
VAR6 = 1;
VAR8:
VAR3[VAR7] = '';
return VAR6;
}
VAR1 FUN1(VAR2 *VAR3, M_uint32 VAR4)
{
size_t VAR5;

if (VAR3 == NULL)
return 0;

for (VAR5=0; VAR5<VAR3->VAR6; VAR5++) {
if (VAR4 & VAR7 && VAR3->VAR8[VAR5] == '') {
VAR5++;
break;
}

if (VAR4 & VAR9) {
if (VAR3->VAR8[VAR5] != '')
break;
} else {
if (!FUN2((char)VAR3->VAR8[VAR5]))
break;
}
}

FUN3(VAR3, VAR5);
return VAR5;
}
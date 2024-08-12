int FUN1(u64 VAR1)
{
int VAR2;
int VAR3;


VAR2 = FUN2(VAR1) * 4;
VAR1 = FUN3(VAR1);

switch (VAR1) {
case 0x1180000001800:
case 0x1180000003800: 
VAR3 = 0;
break;
case 0x1180000001900:
case 0x1180000003880:
VAR3 = 1;
break;
case 0x1180000003900:
VAR3 = 2;
break;
case 0x1180000003980:
VAR3 = 3;
break;
default:
FUN4("", VAR4,
VAR1);
return -1;
}
VAR3 += VAR2;
FUN5("", VAR4, VAR1, VAR3);
return VAR3;
}
static int
FUN1(VAR1 *VAR2, p_tx_sw_packet_t VAR3, VAR4 *VAR5)
{
int VAR6;
int VAR7;
size_t VAR8;
ddi_dma_cookie_t VAR9;
uint_t VAR10;
int VAR11;
uint32_t VAR12;

VAR12 = 0;
VAR8 = FUN2(VAR5);


switch (VAR3->VAR13) {
case VAR14:
FUN3(VAR3->VAR15,
(VAR16)VAR5->VAR17, VAR8, 0, &VAR9);

FUN4(VAR3->VAR15, 0,
VAR18);

VAR10 = 1;
VAR3->VAR19 = VAR14;
break;
case VAR20:
if ((VAR7 = FUN5(
VAR3->VAR15, NULL,
(VAR16)VAR5->VAR17, VAR8,
VAR21 | VAR22,
VAR23, 0, &VAR9,
&VAR10)) != VAR24) {

FUN6(VAR2->VAR25, VAR26,
""
"",
VAR7, VAR3);
return (-1);
}


FUN7(VAR10);
FUN8(VAR2->VAR27,
(VAR10 > 1));


VAR3->VAR19 = VAR20;
break;
default:
FUN7(VAR28);
break;
}

VAR3->VAR29++;


for (VAR6 = VAR10; VAR6 != 0; VAR6--) {

VAR11 = FUN9(VAR2,
VAR3,
VAR9.VAR30,
VAR9.VAR31);

if (VAR11 <= 0)
return (-1);

VAR12 += VAR11;


if (VAR6 > 1) {
FUN10(VAR3->VAR15,
&VAR9);
}
}

return (VAR12);
}
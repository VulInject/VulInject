static int
FUN1(png_voidp VAR1)
{
VAR2 *VAR3 = FUN2(VAR2*,
VAR1);
png_imagep VAR4 = VAR3->VAR4;
png_structrp VAR5 = VAR4->VAR6->VAR5;
png_inforp VAR7 = VAR4->VAR6->VAR7;
png_uint_32 VAR8 = VAR4->VAR8;


int VAR9 = (VAR8 & VAR10);
int VAR11 = !VAR9 && (VAR8 & VAR12); 
int VAR13 = !VAR9 && (VAR8 & VAR14);
int VAR15 = VAR11 && !VAR9 && (VAR3->VAR16 == 0);


FUN3(VAR5, 0);


{
const unsigned int VAR17 = FUN4(VAR4->VAR8);

if (VAR4->VAR18 <= 0x7FFFFFFFU/VAR17) 
{
png_uint_32 VAR19;
const png_uint_32 VAR20 = VAR4->VAR18 * VAR17;

if (VAR3->VAR21 == 0)
VAR3->VAR21 = (VAR22)VAR20;

if (VAR3->VAR21 < 0)
VAR19 = -VAR3->VAR21;

else
VAR19 = VAR3->VAR21;

if (VAR19 >= VAR20)
{

if (VAR4->VAR23 > 0xFFFFFFFF/VAR20)
FUN5(VAR4->VAR6->VAR5, "");
}

else
FUN5(VAR4->VAR6->VAR5, "");
}

else
FUN5(VAR4->VAR6->VAR5, "");
}


if ((VAR8 & VAR10) != 0)
{
if (VAR3->VAR9 != NULL && VAR4->VAR24 > 0)
{
png_uint_32 VAR25 = VAR4->VAR24;

FUN6(VAR5, VAR7, VAR4->VAR18, VAR4->VAR23,
VAR25 > 16 ? 8 : (VAR25 > 4 ? 4 : (VAR25 > 2 ? 2 : 1)),
VAR26, VAR27,
VAR28, VAR29);

FUN7(VAR3);
}

else
FUN5(VAR4->VAR6->VAR5,
"");
}

else
FUN6(VAR5, VAR7, VAR4->VAR18, VAR4->VAR23,
VAR15 ? 16 : 8,
((VAR8 & VAR30) ? VAR31 : 0) +
((VAR8 & VAR14) ? VAR32 : 0),
VAR27, VAR28, VAR29);



if (VAR15 != 0)
{

FUN8(VAR5, VAR7, VAR33);

if ((VAR4->VAR34 & VAR35) == 0)
FUN9(VAR5, VAR7,

31270, 32900,
64000, 33000,
30000, 60000,
15000,  6000
);
}

else if ((VAR4->VAR34 & VAR35) == 0)
FUN10(VAR5, VAR7, VAR36);


else
FUN8(VAR5, VAR7, VAR37);


FUN11(VAR5, VAR7);


if (VAR15 != 0)
{
PNG_CONST png_uint_16 VAR38 = 0x0001;

if ((*(VAR39) & VAR38) != 0)
FUN12(VAR5);
}

if ((VAR8 & VAR40) != 0)
{
if (VAR9 == 0 && (VAR8 & VAR30) != 0)
FUN13(VAR5);
VAR8 &= ~VAR40;
}

if ((VAR8 & VAR41) != 0)
{
if (VAR9 == 0 && (VAR8 & VAR14) != 0)
FUN14(VAR5);
VAR8 &= ~VAR41;
}


if (VAR9 != 0 && VAR4->VAR24 <= 16)
FUN15(VAR5);


if ((VAR8 & ~(VAR42)(VAR30 | VAR12 |
VAR14 | VAR10)) != 0)
FUN5(VAR5, "");

{
png_const_bytep VAR43 = FUN2(VAR39, VAR3->VAR44);
ptrdiff_t VAR45 = VAR3->VAR21;

if (VAR11 != 0)
VAR45 *= (sizeof (VAR46));

if (VAR45 < 0)
VAR43 += (VAR4->VAR23-1) * (-VAR45);

VAR3->VAR47 = VAR43;
VAR3->VAR45 = VAR45;
}


if ((VAR4->VAR34 & VAR48) != 0)
{
FUN16(VAR5, VAR29, VAR49);

FUN17(VAR5, 3);
}


if ((VAR11 != 0 && VAR13 != 0 ) ||
(VAR9 == 0 && VAR3->VAR16 != 0))
{
png_bytep VAR43 = FUN2(VAR50, FUN18(VAR5,
FUN19(VAR5, VAR7)));
int VAR51;

VAR3->VAR52 = VAR43;
if (VAR15 != 0)
VAR51 = FUN20(VAR4, VAR53, VAR3);
else
VAR51 = FUN20(VAR4, VAR54, VAR3);
VAR3->VAR52 = NULL;

FUN21(VAR5, VAR43);


if (VAR51 == 0)
return 0;
}


else
{
png_const_bytep VAR43 = FUN2(VAR39, VAR3->VAR47);
ptrdiff_t VAR45 = VAR3->VAR45;
png_uint_32 VAR55 = VAR4->VAR23;

while (VAR55-- > 0)
{
FUN22(VAR5, VAR43);
VAR43 += VAR45;
}
}

FUN23(VAR5, VAR7);
return 1;
}
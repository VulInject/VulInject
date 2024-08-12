FUN1 (struct VAR1 *VAR2,
struct VAR3 *VAR4,
const struct VAR5 *VAR6,
const struct VAR7 *VAR8,
bfd_vma VAR9,
unsigned int VAR10)
{
const fprintf_ftype VAR11 = VAR2->VAR12;
void *VAR13 = VAR2->VAR14;

switch (VAR8->VAR15)
{
case VAR16:
{
const struct VAR17 *VAR18;

VAR18 = (const struct VAR17 *) VAR8;
VAR10 = FUN2 (VAR18, VAR10);
VAR4->VAR19 = VAR10;
if (VAR18->VAR20)
FUN3 (VAR13, "", VAR10);
else
FUN3 (VAR13, "", VAR10);
}
break;

case VAR21:
{
const struct VAR22 *VAR23;

VAR23 = (const struct VAR22 *) VAR8;
VAR10 = VAR23->VAR24[VAR10];
VAR4->VAR19 = VAR10;
if (VAR23->VAR20)
FUN3 (VAR13, "", VAR10);
else
FUN3 (VAR13, "", VAR10);
}
break;

case VAR25:
{
const struct VAR26 *VAR27;

VAR27 = (const struct VAR26 *) VAR8;
VAR10 += VAR27->VAR28;
if (VAR27->VAR29)
VAR10 -= VAR4->VAR19;
FUN3 (VAR13, "", VAR10);
}
break;

case VAR30:
case VAR31:
{
const struct VAR32 *VAR33;

VAR33 = (const struct VAR32 *) VAR8;
VAR10 = FUN4 (VAR33, VAR10);
FUN5 (VAR2, VAR6, VAR33->VAR34, VAR10);

FUN6 (VAR4, VAR10, VAR33->VAR34);
}
break;

case VAR35:
{
const struct VAR36 *VAR37;

VAR37 = (const struct VAR36 *) VAR8;
FUN5 (VAR2, VAR6, VAR37->VAR34,
VAR37->VAR38[VAR10]);
FUN3 (VAR13, "");
FUN5 (VAR2, VAR6, VAR37->VAR34,
VAR37->VAR39[VAR10]);
}
break;

case VAR40:
{
const struct VAR41 *VAR42;

VAR42 = (const struct VAR41 *) VAR8;
VAR2->VAR43 = FUN7 (VAR42, VAR9, VAR10);


if (VAR42->VAR44
&& VAR2->VAR45 != VAR46)
VAR2->VAR43 &= -2;

(*VAR2->VAR47) (VAR2->VAR43, VAR2);
}
break;

case VAR48:
FUN3 (VAR13, "", VAR10);
break;

case VAR49:
{
int VAR50;

VAR50 = FUN8 (VAR8, VAR10) * 4;
if (VAR50 >= -8 && VAR50 < 8)
VAR50 ^= 0x400;
FUN3 (VAR13, "", VAR50);
break;
}

case VAR51:
{
unsigned int VAR52, VAR53;

VAR52 = VAR10 & 31;
VAR53 = VAR10 >> 5;

if (VAR52 == VAR53 || VAR53 == 0)
FUN3 (VAR13, "", VAR54[VAR52]);
else if (VAR52 == 0)
FUN3 (VAR13, "", VAR54[VAR53]);
else

FUN3 (VAR13, "", VAR54[VAR52],
VAR54[VAR53]);
}
break;

case VAR55:
case VAR56:
case VAR57:
{
FUN5 (VAR2, VAR6, VAR58, VAR10 & 31);
FUN6 (VAR4, VAR10, VAR58);
}
break;

case VAR59:
if (VAR8->VAR60 == 2)
{
if (VAR10 == 0)
FUN3 (VAR13, "",
VAR54[16],
VAR54[31]);
else
FUN3 (VAR13, "",
VAR54[16],
VAR54[16 + VAR10],
VAR54[31]);
}
else
{
int VAR61;

VAR61 = VAR10 & 0xf;
if (VAR61 != 0)
{
if (VAR61 == 1)
FUN3 (VAR13, "", VAR54[16]);
else if (VAR61 < 9)
FUN3 (VAR13, "",
VAR54[16],
VAR54[15 + VAR61]);
else if (VAR61 == 9)
FUN3 (VAR13, "",
VAR54[16],
VAR54[23],
VAR54[30]);
else
FUN3 (VAR13, "");
}

if (VAR10 & 0x10) 
{
if (VAR61 == 0)
FUN3 (VAR13, "", VAR54[31]);
else
FUN3 (VAR13, "", VAR54[31]);
}
}
break;

case VAR62:
{
const char *VAR63;
unsigned int VAR64, VAR65;

VAR63 = "";
VAR64 = (VAR10 >> 3) & 7;
if (VAR64 > 0 && VAR64 < 5)
{
FUN3 (VAR13, "", VAR54[4]);
if (VAR64 > 1)
FUN3 (VAR13, "", VAR54[VAR64 + 3]);
VAR63 = "";
}

VAR65 = (VAR10 >> 1) & 3;
if (VAR65 == 3)
{
FUN3 (VAR13, "", VAR63);
VAR63 = "";
}
else if (VAR65 > 0)
{
FUN3 (VAR13, "", VAR63, VAR54[16]);
if (VAR65 > 1)
FUN3 (VAR13, "", VAR54[VAR65 + 15]);
VAR63 = "";
}

if (VAR10 & 1)
{
FUN3 (VAR13, "", VAR63, VAR54[31]);
VAR63 = "";
}

if (VAR64 == 5 || VAR64 == 6)
{
FUN3 (VAR13, "", VAR63, VAR66[0]);
if (VAR64 == 6)
FUN3 (VAR13, "", VAR66[1]);
}
}
break;

case VAR67:

FUN9 ();

case VAR68:
{
unsigned int VAR69;

VAR69 = VAR10 >> 5;
VAR10 &= 31;
if ((VAR69 & 0x10) == 0)
{
int VAR70;

VAR69 &= 0x0f;
for (VAR70 = 0; VAR70 < 3; VAR70++, VAR69 >>= 1)
if ((VAR69 & 1) == 0)
break;
FUN5 (VAR2, VAR6, VAR71, VAR10);
FUN3 (VAR13, "", VAR69 >> 1);
}
else if ((VAR69 & 0x08) == 0)
FUN5 (VAR2, VAR6, VAR71, VAR10);
else
FUN3 (VAR13, "", VAR10);
}
break;

case VAR72:
FUN5 (VAR2, VAR6, VAR4->VAR73, VAR4->VAR74);
break;

case VAR75:
FUN5 (VAR2, VAR6, VAR4->VAR73, VAR4->VAR76);
break;

case VAR77:
FUN3 (VAR13, "");
break;

case VAR78:
FUN5 (VAR2, VAR6, VAR58, 28);
break;

case VAR79:
case VAR80:
FUN10 (VAR2, VAR8, VAR10);
break;

case VAR81:
FUN3 (VAR13, "", VAR10);
break;

case VAR82:
FUN3 (VAR13, "");
FUN5 (VAR2, VAR6, VAR58, VAR10);
FUN3 (VAR13, "");
break;
}
}
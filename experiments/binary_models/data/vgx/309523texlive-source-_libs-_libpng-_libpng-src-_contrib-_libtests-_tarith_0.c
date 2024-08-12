int FUN1(int argc, char **argv)
{
double VAR1[9] = { 2.2, 1.8, 1.52, 1.45, 1., 1/1.45, 1/1.52, 1/1.8, 1/2.2 };
double VAR2;
int VAR3, VAR4=0, VAR5=0;


while (--argc > 0)
if (strcmp(*++argv, "") == 0)
VAR4 = 1;
else if (strcmp(*argv, "") == 0)
VAR5 = 1;
else
{
fprintf(VAR6, "", *argv);
return 1;
}

if (!VAR5)
{

VAR2 = 0;
for (VAR3=0; VAR3<256; ++VAR3)
{
double VAR7 = -FUN2(VAR3/255.)/FUN2(2.)*65536;
double VAR8 = FUN3(VAR3) - VAR7;

if (VAR3 != 0 && FUN4(VAR8) > VAR2)
VAR2 = FUN4(VAR8);

if (VAR3 == 0 && FUN3(VAR3) != 0xffffffff ||
VAR3 != 0 && FUN3(VAR3) != FUN5(VAR7+.5))
{
fprintf(VAR6, "",
VAR3, FUN3(VAR3), VAR7);
}
}

if (!VAR4)
FUN6("", VAR2);

VAR2 = 0;
for (VAR3=0; VAR3<65536; ++VAR3)
{
double VAR7 = -FUN2(VAR3/65535.)/FUN2(2.)*65536;
double VAR8 = FUN7(VAR3) - VAR7;

if (VAR3 != 0 && FUN4(VAR8) > VAR2)
VAR2 = FUN4(VAR8);

if (VAR3 == 0 && FUN7(VAR3) != 0xffffffff ||
VAR3 != 0 && FUN7(VAR3) != FUN5(VAR7+.5))
{
if (VAR8 > .68) 
{
fprintf(VAR6,
"",
VAR3, FUN7(VAR3), VAR7, VAR8);
}
}
}

if (!VAR4)
FUN6("", VAR2);


VAR2 = 0;
for (VAR3=0; VAR3<=0xfffff; ++VAR3)
{
double VAR7 = FUN8(-VAR3/65536. * FUN2(2.)) * (65536. * 65536);
double VAR8 = FUN9(VAR3) - VAR7;

if (FUN4(VAR8) > VAR2)
VAR2 = FUN4(VAR8);
if (FUN4(VAR8) > 1883) 
{
fprintf(VAR6,
"",
VAR3, FUN9(VAR3), VAR7, VAR8);
}
}

if (!VAR4)
FUN6("", VAR2);

VAR2 = 0;
for (VAR3=0; VAR3<=0xfffff; ++VAR3)
{
double VAR7 = FUN8(-VAR3/65536. * FUN2(2.)) * 255;
double VAR8 = FUN10(VAR3) - VAR7;

if (FUN4(VAR8) > VAR2)
VAR2 = FUN4(VAR8);
if (FUN4(VAR8) > .50002) 
{
fprintf(VAR6,
"",
VAR3, FUN10(VAR3), VAR7, VAR8);
}
}

if (!VAR4)
FUN6("", VAR2);

VAR2 = 0;
for (VAR3=0; VAR3<=0xfffff; ++VAR3)
{
double VAR7 = FUN8(-VAR3/65536. * FUN2(2.)) * 65535;
double VAR8 = FUN11(VAR3) - VAR7;

if (FUN4(VAR8) > VAR2)
VAR2 = FUN4(VAR8);
if (FUN4(VAR8) > .524) 
{
fprintf(VAR6,
"",
VAR3, FUN11(VAR3), VAR7, VAR8);
}
}

if (!VAR4)
FUN6("", VAR2);
} 


for (VAR3=0; VAR3<9; ++VAR3)
{
unsigned VAR9;
double VAR10 = VAR1[VAR3];
png_fixed_point VAR11 = FUN5(VAR10 * VAR12 + .5);

if (!VAR4)
FUN6("", VAR10);

VAR2 = 0;
for (VAR9=0; VAR9<256; ++VAR9)
{
double VAR7 = FUN12(VAR9/255., VAR10) * 255;
png_byte VAR13 = FUN13(VAR9, VAR11);
double VAR8 = VAR13 - VAR7;

if (FUN4(VAR8) > VAR2)
VAR2 = FUN4(VAR8);
if (VAR13 != FUN5(VAR7+.5))
{
fprintf(VAR6, "",
VAR9, VAR10, VAR13, VAR7, VAR8);
}
}

if (!VAR4)
FUN6("", VAR10, VAR2);

VAR2 = 0;
for (VAR9=0; VAR9<65536; ++VAR9)
{
double VAR7 = FUN12(VAR9/65535., VAR10) * 65535;
png_uint_16 VAR13 = FUN14(VAR9, VAR11);
double VAR8 = VAR13 - VAR7;

if (FUN4(VAR8) > VAR2)
VAR2 = FUN4(VAR8);
if (FUN4(VAR8) > 1.62)
{
fprintf(VAR6, "",
VAR9, VAR10, VAR13, VAR7, VAR8);
}
}

if (!VAR4)
FUN6("", VAR10, VAR2);
}

return 0;
}
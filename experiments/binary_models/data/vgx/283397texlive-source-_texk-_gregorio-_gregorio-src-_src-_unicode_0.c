static bool FUN1(VAR1 *VAR2, const char *VAR3, size_t VAR4)
{
bool VAR5 = true;
unsigned char VAR6;
grewchar VAR7 = 0;
unsigned char VAR8;
size_t VAR9 = 0; 
FUN2(VAR3, VAR10, return false);
FUN2(VAR2, VAR10, return false);
while (VAR5 && *VAR3 && VAR9 < VAR4) {
VAR8 = (unsigned char) (*VAR3);
if (VAR8 < 128) { 

VAR6 = 0;
VAR7 = VAR8;
} else if (VAR8 >= 240) { 


VAR6 = 3;
VAR7 = (VAR7 << 3) | (VAR8 & 7);
} else if (VAR8 >= 224) { 


VAR6 = 2;
VAR7 = (VAR7 << 4) | (VAR8 & 15);
} else if (VAR8 >= 192) { 


VAR6 = 1;
VAR7 = (VAR7 << 5) | (VAR8 & 31);
} else {

FUN3(FUN4(""),
"", VAR11, 0);
VAR5 = false;
break;
}
while (VAR6 > 0) {
VAR6--;
VAR3++;
VAR8 = (unsigned char) (*VAR3);
if (VAR8 < 192 && VAR8 >= 128) 
{
VAR7 = (VAR7 << 6) | (VAR8 & 63);
} else {
FUN3(FUN4(""),
"", VAR11, 0);
VAR5 = false;
break;
}
}
VAR2[VAR9] = VAR7;

VAR9++;
VAR7 = 0;
VAR3++;
}
VAR2[VAR9] = 0;
return VAR5;
}
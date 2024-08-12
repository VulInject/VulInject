static enum VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
u32 VAR6, u32 VAR7,
char *VAR8)
{













enum _ecore_status_t VAR9;
u8 VAR10[32];

VAR9 = FUN2(VAR3, VAR5, VAR6, VAR11,
131, 1, VAR10);
if (VAR9 != VAR12)
return FUN3(VAR9, VAR7, VAR8,
"");

VAR7 += FUN4(&VAR8[VAR7],
"", VAR10[0]);

switch (VAR10[0]) {
case 0x1:

VAR7 += FUN4(&VAR8[VAR7],
"");
break;
case 0x2:

VAR7 += FUN4(&VAR8[VAR7],
"");
break;
case 0x4:

VAR7 += FUN4(&VAR8[VAR7],
"");
break;
case 0x8:

VAR7 += FUN4(&VAR8[VAR7],
"");
break;
case 0x10:

VAR7 += FUN4(&VAR8[VAR7],
"");
break;
case 0x20:

VAR7 += FUN4(&VAR8[VAR7],
"");
break;
case 0x40:

VAR7 += FUN4(&VAR8[VAR7],
"");
break;
case 0x88: 
VAR7 += FUN4(&VAR8[VAR7],
"");
break;
case 0x80:

VAR7 += FUN4(&VAR8[VAR7],
"");











VAR9 = FUN2(VAR3, VAR5, VAR6,
VAR11, 192, 1, VAR10);
if (VAR9 != VAR12)
return FUN3(VAR9, VAR7, VAR8,
"");

switch (VAR10[0]) {
case 0:

VAR7 += FUN4(&VAR8[VAR7],
"");
break;
case 0x1:

VAR7 += FUN4(&VAR8[VAR7],
"");
break;
case 0x2:

VAR7 += FUN4(&VAR8[VAR7],
"");
break;
case 0x3:

VAR7 += FUN4(&VAR8[VAR7],
"");
break;
case 0x4:

VAR7 += FUN4(&VAR8[VAR7],
"");
break;
case 0x8:

VAR7 += FUN4(&VAR8[VAR7],
"");
break;
case 0xb:

VAR7 += FUN4(&VAR8[VAR7],
"");
break;
case 0x11:

VAR7 += FUN4(&VAR8[VAR7],
"");
break;
default:
VAR7 += FUN4(&VAR8[VAR7],
"",
VAR10[0]);
break;
}
break;
default:

VAR7 += FUN4(&VAR8[VAR7],
"",
VAR10[0]);
VAR7 += FUN4(&VAR8[VAR7],
"");
break;
}




VAR9 = FUN2(VAR3, VAR5, VAR6, VAR11,
141, 7, VAR10);
if (VAR9 != VAR12)
return FUN3(VAR9, VAR7, VAR8,
"");

VAR7 += FUN4(&VAR8[VAR7],
"", VAR10[0]);
VAR7 += FUN4(&VAR8[VAR7],
"", VAR10[1]);
VAR7 += FUN4(&VAR8[VAR7],
"", VAR10[2]);
VAR7 += FUN4(&VAR8[VAR7],
"", VAR10[3]);
VAR7 += FUN4(&VAR8[VAR7],
"", VAR10[4]);
VAR7 += FUN4(&VAR8[VAR7],
"", VAR10[5]);
VAR7 += FUN4(&VAR8[VAR7],
"", VAR10[6]);


VAR9 = FUN2(VAR3, VAR5, VAR6, VAR11,
148, 16, VAR10);
if (VAR9 != VAR12)
return FUN3(VAR9, VAR7, VAR8,
"");

VAR10[16] = 0;
VAR7 += FUN4(&VAR8[VAR7],
"", VAR10);


VAR9 = FUN2(VAR3, VAR5, VAR6, VAR11,
165, 3, VAR10);
if (VAR9 != VAR12)
return FUN3(VAR9, VAR7, VAR8,
"");

VAR7 += FUN4(&VAR8[VAR7],
"",
VAR10[0], VAR10[1], VAR10[2]);


VAR9 = FUN2(VAR3, VAR5, VAR6, VAR11,
168, 16, VAR10);
if (VAR9 != VAR12)
return FUN3(VAR9, VAR7, VAR8,
"");

VAR10[16] = 0;
VAR7 += FUN4(&VAR8[VAR7],
"", VAR10);


VAR9 = FUN2(VAR3, VAR5, VAR6, VAR11,
184, 2, VAR10);
if (VAR9 != VAR12)
return FUN3(VAR9, VAR7, VAR8,
"");

VAR10[2] = 0;
VAR7 += FUN4(&VAR8[VAR7],
"", VAR10);

return VAR9;
}
FUN1 (VAR1        *VAR2,
VAR3      *VAR4,
VAR5    *VAR6,
VAR7 *VAR8,
gint          VAR9,
gboolean      VAR10)
{
VAR11    **VAR12;


static const VAR11 *VAR13[] =
{
"",  
"",  
"",  
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
""
};
static const guint VAR14 = FUN2 (VAR13);

for (int VAR15 = 0; VAR15 < VAR14; VAR15++)
{
FUN3 (FUN4 (VAR8),
VAR13[VAR15]);
}


VAR12 = FUN5 (FUN4 (VAR8));
for (char **VAR16 = VAR12; *VAR16; VAR16++)
{

if (FUN6 (*VAR16, "")
&& (*VAR16)[strlen ("")] >= ''
&& (*VAR16)[strlen ("")] <= '')
FUN3 (FUN4 (VAR8), *VAR16);
if (FUN6 (*VAR16, "")
&& (*VAR16)[strlen ("")] >= ''
&& (*VAR16)[strlen ("")] <= '')
FUN3 (FUN4 (VAR8), *VAR16);
if (FUN6 (*VAR16, ""))
FUN3 (FUN4 (VAR8), *VAR16);
}

FUN7 (VAR8, VAR9);
if (VAR10)
FUN8 (VAR8, VAR17);

FUN9 (FUN10 (VAR4),
VAR6, VAR2);
}
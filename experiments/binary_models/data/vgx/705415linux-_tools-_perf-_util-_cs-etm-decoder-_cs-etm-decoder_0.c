int FUN1(struct VAR1 *VAR2,
u64 VAR3, const VAR4 *VAR5,
size_t VAR6, VAR7 *VAR8)
{
int VAR9 = 0;
ocsd_datapath_resp_t VAR10 = VAR11;
ocsd_datapath_resp_t VAR12 = VAR2->VAR12;
size_t VAR13 = 0;
u32 VAR14;

while (VAR13 < VAR6) {
if (FUN2(VAR12)) {
VAR10 = FUN3(VAR2->VAR15,
VAR16,
0,
0,
NULL,
NULL);
} else if (FUN4(VAR12)) {
VAR10 = FUN3(VAR2->VAR15,
VAR17,
VAR3 + VAR13,
VAR6 - VAR13,
&VAR5[VAR13],
&VAR14);
VAR13 += VAR14;
} else {
VAR9 = -VAR18;
break;
}


if (FUN2(VAR10))
break;

VAR12 = VAR10;
}

VAR2->VAR12 = VAR10;
*VAR8 = VAR13;

return VAR9;
}
static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
__le32 VAR4;
enum snd_ff_stream_mode VAR5;
int VAR6;
int VAR7;


for (VAR6 = 0; VAR6 < VAR8; VAR6++) {
if (VAR9[VAR6] == VAR3)
break;
}
if (VAR6 >= VAR8)
return -VAR10;


VAR4 = FUN2(VAR3);
VAR7 = FUN3(VAR2->VAR11, VAR12,
VAR13, &VAR4, sizeof(VAR4), 0);
if (VAR7 < 0)
return VAR7;

FUN4(100);

VAR7 = FUN5(VAR6, &VAR5);
if (VAR7 < 0)
return VAR7;


VAR2->VAR14.VAR15 = 0x00000000000000ffuLL;
VAR7 = FUN6(&VAR2->VAR14,
FUN7(&VAR2->VAR16),
FUN8(VAR2->VAR11)->VAR17);
if (VAR7 < 0)
return VAR7;


VAR2->VAR18.VAR15 = 0x00000000000000ffuLL;
VAR7 = FUN6(&VAR2->VAR18,
FUN7(&VAR2->VAR19),
FUN8(VAR2->VAR11)->VAR17);
if (VAR7 < 0)
FUN9(&VAR2->VAR14);

return VAR7;
}
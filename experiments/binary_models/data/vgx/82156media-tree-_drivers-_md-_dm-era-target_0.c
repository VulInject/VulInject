static void FUN1(struct VAR1 *VAR1)
{
int VAR2;
struct bio_list VAR3, VAR4;
struct VAR5 *VAR5;
bool VAR6 = false;
bool VAR7 = false;

FUN2(&VAR3);
FUN2(&VAR4);

FUN3(&VAR1->VAR8);
FUN4(&VAR3, &VAR1->VAR3);
FUN2(&VAR1->VAR3);
FUN5(&VAR1->VAR8);

while ((VAR5 = FUN6(&VAR3))) {
VAR2 = FUN7(&VAR1->VAR9->VAR10,
VAR1->VAR9->VAR11,
FUN8(VAR1, VAR5));
if (VAR2 < 0) {

VAR7 = true;

} else if (VAR2 == 0)
VAR6 = true;

FUN9(&VAR4, VAR5);
}

if (VAR6) {
VAR2 = FUN10(VAR1->VAR9);
if (VAR2)
VAR7 = true;
}

if (VAR7)
while ((VAR5 = FUN6(&VAR4)))
FUN11(VAR5);
else
while ((VAR5 = FUN6(&VAR4)))
FUN12(VAR5);
}
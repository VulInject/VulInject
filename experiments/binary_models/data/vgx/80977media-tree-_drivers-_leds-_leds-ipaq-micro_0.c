static int FUN1(struct VAR1 *VAR2,
enum led_brightness VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2->VAR6->VAR7->VAR7);

struct ipaq_micro_msg VAR8 = {
.VAR9 = VAR10,
.VAR11 = 4,
};

VAR8.VAR12[0] = VAR13;
VAR8.VAR12[1] = 0;
if (VAR3) {
VAR8.VAR12[2] = 0; 
VAR8.VAR12[3] = 1;
} else {
VAR8.VAR12[2] = 1;
VAR8.VAR12[3] = 0; 
}
return FUN3(VAR5, &VAR8);
}
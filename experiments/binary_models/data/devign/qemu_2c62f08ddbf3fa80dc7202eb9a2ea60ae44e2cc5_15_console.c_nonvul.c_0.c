VAR1 *FUN1(graphic_hw_update_ptr update, graphic_hw_invalidate_ptr VAR2, graphic_hw_text_update_ptr VAR3, void *VAR4)
{
    int VAR5 = 640;
    int VAR6 = 480;
    VAR1 *VAR7;
    VAR8 *VAR9;
    VAR9 = FUN2();
    FUN3();
    VAR7 = FUN4(VAR9, VAR10);
    VAR7->VAR11 = update;
    VAR7->VAR12 = VAR2;
    VAR7->VAR13 = VAR3;
    VAR7->VAR14 = VAR4;
    VAR7->VAR15 = FUN5(VAR5, VAR6);
    return VAR7;
}
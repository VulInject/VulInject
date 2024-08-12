unsigned FUN1(const VAR1 *VAR2, const VAR3 *VAR4, const VAR5 *VAR6)
{
    void *VAR7 = FUN2(VAR6);
    unsigned VAR8;
    if (VAR2->VAR9 == VAR10)
    {
        D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC VAR11;
        FUN3((VAR12 *)VAR7, &VAR11);
        return VAR11.VAR13.VAR14;
    }
    for (VAR8 = 0; VAR8 < FUN4(VAR2, VAR4); VAR8++)
    {
        if (VAR2->VAR9 == VAR15 && VAR4->VAR16.VAR7[VAR8] == VAR7)
            return VAR8;
    }
    assert(0);
    return 0;
}
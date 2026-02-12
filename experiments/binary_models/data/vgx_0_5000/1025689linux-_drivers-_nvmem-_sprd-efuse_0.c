static int sprd_efuse_read(void *context, u32 offset, void *val, size_t bytes)
{
struct sprd_efuse *efuse = context;
bool blk_double = efuse->data->blk_double;
u32 index = offset / SPRD_EFUSE_BLOCK_WIDTH + efuse->data->blk_offset;
u32 blk_offset = (offset % SPRD_EFUSE_BLOCK_WIDTH) * BITS_PER_BYTE;
u32 data;
int ret;

ret = sprd_efuse_lock(efuse);
if (ret)
return ret;

ret = clk_prepare_enable(efuse->clk);
if (ret)
goto unlock;

ret = sprd_efuse_raw_read(efuse, index, &data, blk_double);
if (!ret) {
data >>= blk_offset;
memcpy(val, &data, bytes);
}

clk_disable_unprepare(efuse->clk);

unlock:
sprd_efuse_unlock(efuse);
return ret;
}
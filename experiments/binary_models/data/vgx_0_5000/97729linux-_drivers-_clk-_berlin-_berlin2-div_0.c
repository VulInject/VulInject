static u8 berlin2_div_get_parent(struct clk_hw *hw)
{
struct berlin2_div *div = to_berlin2_div(hw);
struct berlin2_div_map *map = &div->map;
u32 reg;
u8 index = 0;

if (div->lock)
spin_lock(div->lock);


reg = readl_relaxed(div->base + map->pll_switch_offs);
reg &= BIT(map->pll_switch_shift);
if (reg) {
reg = readl_relaxed(div->base + map->pll_select_offs);
reg >>= map->pll_select_shift;
reg &= PLL_SELECT_MASK;
index = 1 + reg;
}

if (div->lock)
spin_unlock(div->lock);

return index;
}
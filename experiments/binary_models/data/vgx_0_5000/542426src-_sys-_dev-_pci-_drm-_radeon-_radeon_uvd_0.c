void radeon_uvd_force_into_uvd_segment(struct radeon_bo *rbo,
uint32_t allowed_domains)
{
int i;

for (i = 0; i < rbo->placement.num_placement; ++i) {
rbo->placements[i].fpfn = 0 >> PAGE_SHIFT;
rbo->placements[i].lpfn = (256 * 1024 * 1024) >> PAGE_SHIFT;
}


if (allowed_domains == RADEON_GEM_DOMAIN_VRAM)
return;


if (rbo->placement.num_placement > 1)
return;


rbo->placements[1] = rbo->placements[0];
rbo->placements[1].fpfn += (256 * 1024 * 1024) >> PAGE_SHIFT;
rbo->placements[1].lpfn += (256 * 1024 * 1024) >> PAGE_SHIFT;
rbo->placement.num_placement++;
rbo->placement.num_busy_placement++;
}
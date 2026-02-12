static int mipid02_configure_from_rx(struct mipid02_dev *bridge)
{
struct v4l2_fwnode_endpoint *ep = &bridge->rx;
bool are_lanes_swap = ep->bus.mipi_csi2.data_lanes[0] == 2;
bool *polarities = ep->bus.mipi_csi2.lane_polarities;
int nb = ep->bus.mipi_csi2.num_data_lanes;
int ret;

ret = mipid02_configure_clk_lane(bridge);
if (ret)
return ret;

ret = mipid02_configure_data0_lane(bridge, nb, are_lanes_swap,
polarities);
if (ret)
return ret;

ret = mipid02_configure_data1_lane(bridge, nb, are_lanes_swap,
polarities);
if (ret)
return ret;

bridge->r.mode_reg1 |= are_lanes_swap ? MODE_DATA_SWAP : 0;
bridge->r.mode_reg1 |= (nb - 1) << 1;

return mipid02_configure_from_rx_speed(bridge);
}
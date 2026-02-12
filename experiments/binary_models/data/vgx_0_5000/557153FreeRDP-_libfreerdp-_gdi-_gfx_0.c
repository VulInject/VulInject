static UINT gdi_MapSurfaceToOutput(RdpgfxClientContext* context,
const RDPGFX_MAP_SURFACE_TO_OUTPUT_PDU* surfaceToOutput)
{
UINT rc = ERROR_INTERNAL_ERROR;
gdiGfxSurface* surface = NULL;
EnterCriticalSection(&context->mux);

WINPR_ASSERT(context->GetSurfaceData);
surface = (gdiGfxSurface*)context->GetSurfaceData(context, surfaceToOutput->surfaceId);

if (!surface)
goto fail;

if (surface->windowMapped)
{
WLog_WARN(TAG, "sufrace already windowMapped when trying to set outputMapped");
goto fail;
}

surface->outputMapped = TRUE;
surface->outputOriginX = surfaceToOutput->outputOriginX;
surface->outputOriginY = surfaceToOutput->outputOriginY;
surface->outputTargetWidth = surface->mappedWidth;
surface->outputTargetHeight = surface->mappedHeight;
region16_clear(&surface->invalidRegion);
rc = CHANNEL_RC_OK;
fail:
LeaveCriticalSection(&context->mux);
return rc;
}
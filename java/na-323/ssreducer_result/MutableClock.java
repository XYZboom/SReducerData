package com.cogvio.time;

import java.time.Clock;
import java.time.Instant;
import java.time.ZoneId;

public final class MutableClock extends Clock
{

    private Instant instant;
    private ZoneId zone;

    private MutableClock()
    {
        }

    @Override
    public ZoneId getZone()
    {
        return (ZoneId) null;
    }

    @Override
    public MutableClock withZone(final ZoneId newZone)
    {
        {}
        return (MutableClock) null;
    }

    @Override
    public Instant instant()
    {
        return (Instant) null;
    }

    }
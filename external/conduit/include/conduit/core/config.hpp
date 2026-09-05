#ifndef CONDUIT_CONFIG_HPP
#define CONDUIT_CONFIG_HPP

namespace conduit::config {
    #define CONDUIT_ALIGN_16 alignas(16)
    #define CONDUIT_ALIGN_64 alignas(64)

    using precision_type = float;

    inline constexpr precision_type TARGET_FRAME_RATE = precision_type(60.0);
    inline constexpr precision_type FIXED_TIME_STEP = precision_type(1.0) / TARGET_FRAME_RATE;

} // namespace conduit

#endif // CONDUIT_CONFIG_HPP
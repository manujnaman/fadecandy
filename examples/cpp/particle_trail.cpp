#include "lib/effect_runner.h"
#include "particle_trail.h"

int main(int argc, char **argv)
{
    EffectRunner r;
    ParticleTrailEffect e;
    r.setEffect(&e);
    r.setLayout("../layouts/grid8x8.json");
    return r.main(argc, argv);
}

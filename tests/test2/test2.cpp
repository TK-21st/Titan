#include <Loch/sim.h>

int main() {
    Simulation sim;

    Lattice * l1 = sim.createLattice(Vec(0, 0, 10), Vec(5, 5, 5), 10, 10, 10);
    sim.createBall(Vec(0, 0, 0), 2);

    double runtime = 10.0;

    sim.start(runtime); // 10 second runtime.

    while (sim.running()) {
        sim.pause(sim.time() + 1.0);

        if (sim.time() > runtime) {
            sim.stop();
            break;
        } else {
            sim.resume();
        }
    }
}
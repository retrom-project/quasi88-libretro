# Retrom QUASI88 fork

`master` mirrors upstream without Retrom changes. Maintain integrations on
`retrom/g459bbc6e90ca`; feature branches use `feat/*`, `fix/*`, or `build/*`.
Read `retrom-fork.json` for exact source and ABI identities.

Build candidates with `.github/rpg-runtime/build-candidate.sh <empty-absolute-directory>`.
The candidate includes the EmulatorJS core, component license texts, complete fork
source archive, and provenance descriptor. No BIOS or games belong in this repository.
Preserve keyboard input, single-target gamepad mappings, audio and native instant states.
Validate input/state changes with deterministic regressions and the real Retrom PC-88
product acceptance before release. Release tags use `retrom-core-g459bbc6e90ca-rN`.

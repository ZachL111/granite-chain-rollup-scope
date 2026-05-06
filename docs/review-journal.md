# Review Journal

The review surface for `granite-chain-rollup-scope` is deliberately narrow: one fixture, one scoring rule, and one local check.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its blockchain tooling focus without claiming live deployment or external usage.

## Cases

- `baseline`: `event finality`, score 146, lane `ship`
- `stress`: `nonce pressure`, score 156, lane `ship`
- `edge`: `settlement risk`, score 176, lane `ship`
- `recovery`: `proof depth`, score 169, lane `ship`
- `stale`: `event finality`, score 177, lane `ship`

## Note

A future change should add new cases before it changes the scoring rule.

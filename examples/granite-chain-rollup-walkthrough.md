# Granite Chain Rollup Scope Walkthrough

This note is the quickest way to read the extra review model in `granite-chain-rollup-scope`.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | event finality | 146 | ship |
| stress | nonce pressure | 156 | ship |
| edge | settlement risk | 176 | ship |
| recovery | proof depth | 169 | ship |
| stale | event finality | 177 | ship |

Start with `stale` and `baseline`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

`stale` is the optimistic case; use it to make sure the scoring path still rewards strong signal.

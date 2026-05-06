# granite-chain-rollup-scope

`granite-chain-rollup-scope` keeps a focused C implementation around blockchain tooling. The project goal is to implement a C blockchain tooling project for rollup event replay, using fixture event logs and golden state snapshots.

## Why It Exists

I want this repository to be useful as a quick reading exercise: fixtures first, implementation second, verifier last.

## Granite Chain Rollup Scope Review Notes

Start with `event finality` and `event finality`. Those cases create the widest score spread in this repo, so they are the best quick check when the model changes.

## Features

- `fixtures/domain_review.csv` adds cases for event finality and nonce pressure.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/granite-chain-rollup-walkthrough.md` walks through the case spread.
- The C code includes a review path for `event finality` and `event finality`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Architecture Notes

The core code exposes a scoring path and the added review layer uses `signal`, `slack`, `drag`, and `confidence`. The domain terms are `event finality`, `nonce pressure`, `settlement risk`, and `proof depth`.

The C addition stays small enough to inspect in one sitting.

## Usage

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Tests

The verifier is intentionally local. It should fail if the fixture score math, lane assignment, or language-specific test drifts.

## Limitations And Roadmap

No external service is required. A deeper version would add more negative cases and a clearer boundary around invalid input.

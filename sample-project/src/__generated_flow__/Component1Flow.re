/** Header generated by genFlow */

Js_unsafe.raw_stmt(
  "import type {ComponentSpec as ReasonReactComponentSpec} from '../shims/ReasonReactFlowShim'",
);
Js_unsafe.raw_stmt(
  "import type {Stateless as ReasonReactStateless} from '../shims/ReasonReactFlowShim'",
);
Js_unsafe.raw_stmt(
  "import type {NoRetainedProps as ReasonReactNoRetainedProps} from '../shims/ReasonReactFlowShim'",
);
Js_unsafe.raw_stmt(
  "import type {Actionless as ReasonReactActionless} from '../shims/ReasonReactFlowShim'",
);
Js_unsafe.raw_stmt(
  "import type {Component as ReactComponent} from 'React'",
);
let __flowTypeValueAnnotation__plus = "<T10970>(number, T10970) => number";
let plus = Component1.plus;
Js_unsafe.raw_stmt(
  "export type Props = {|message?:string|}",
);
let __flowTypeValueAnnotation__component = "React$ComponentType<Props>";
let component =
  ReasonReact.wrapReasonForJs(~component=Component1.component, jsProps =>
    ((argA, argB) => Component1.make(~message=?argA##message, argB))(
      jsProps,
      jsProps##children,
    )
  );
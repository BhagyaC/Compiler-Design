# Compiler-Design -LEX AND YACC problems 

### What is a compiler?

In order to reduce the complexity of designing and building computers, nearly all
of these are made to execute relatively simple commands (but do so very quickly).
A program for a computer must be built by combining these very simple commands
into a program in what is called machine language. Since this is a tedious and error-
prone process most programming is, instead, done using a high-level programming
language. This language can be very different from the machine language that the
computer can execute, so some means of bridging the gap is required. This is where
the compiler comes in.

A compiler translates (or compiles) a program written in a high-level program-
ming language that is suitable for human programmers into the low-level machine
language that is required by computers. During this process, the compiler will also
attempt to spot and report obvious programmer mistakes.
Using a high-level language for programming has a large impact on how fast
programs can be developed. The main reasons for this are:

• Compared to machine language, the notation used by programming lan-
guages is closer to the way humans think about problems.

• The compiler can spot some obvious programming mistakes.

• Programs written in a high-level language tend to be shorter than equivalent
programs written in machine language.

Another advantage of using a high-level level language is that the same program
can be compiled to many different machine languages and, hence, be brought to
run on many different machines.
Why learn about compilers?
Few people will ever be required to write a compiler for a general-purpose language
like C, Pascal or SML. So why do most computer science institutions offer compiler
courses and often make these mandatory?
Some typical reasons are:

a) It is considered a topic that you should know in order to be “well-cultured”
in computer science.

b) A good craftsman should know his tools, and compilers are important tools
for programmers and computer scientists.

c) The techniques used for constructing a compiler are useful for other purposes
as well.

d) There is a good chance that a programmer or computer scientist will need to
write a compiler or interpreter for a domain-specific language.

The first of these reasons is somewhat dubious, though something can be said for
“knowing your roots”, even in such a hastily changing field as computer science.
Reason “b” is more convincing: Understanding how a compiler is built will allow programmers to get an intuition about what their high-level programs will look like when compiled and use this intuition to tune programs for better efficiency.
Furthermore, the error reports that compilers provide are often easier to understand
when one knows about and understands the different phases of compilation, such
as knowing the difference between lexical errors, syntax errors, type errors and so
on.
The third reason is also quite valid. In particular, the techniques used for reading (lexing and parsing) the text of a program and converting this into a form (abstract syntax) that is easily manipulated by a computer, can be used to read and
manipulate any kind of structured text such as XML documents, address lists, etc..Reason “d” is becoming more and more important as domain specific languages(DSLs) are gaining in popularity. A DSL is a (typically small) language designed
for a narrow class of problems.

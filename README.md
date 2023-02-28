<h1 align="center">
	💬 minitalk
</h1>

<p align="center">
	<b><i>Data exchange program: UNIX signals</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/juwkim/minitalk?color=lightblue">
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/juwkim/minitalk?color=yellow">
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/juwkim/minitalk?color=blue">
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/juwkim/minitalk?color=green">
</p>

<h3 align="center">
	<a href="#-about-the-project">About</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
</h3>

---

## 💡 About the project

> _The purpose of this project is to code a small data exchange program using UNIX signals._

For more detailed information, look at the [**subject of this project**](https://github.com/juwkim/42cursus/blob/main/Subject%20PDFs/02_minitalk.pdf).

## 🛠️ Usage

### Requirements

The library is written in C language and thus needs the **C compiler** and some standard **C libraries** to run.

### Instructions

- Pull files ↙️
```shell
$ git clone https://github.com/juwkim/minitalk
```

- To build minitalk ↙️
```shell
$ make
```

- To clean all object files (.o) and executable files ↙️

```shell
$ make fclean
```

- To check this repository complies with [norminette](https://github.com/42School/norminette) ↙️

```shell
$ make norm
```

## 📋 Testing

To test the program you just need to launch the <server> and the <client> in different shell tabs with the following:

```shell
$ ./server
```

This will show your PID to make the client work and will stay waiting to receive a message from the <client>

```shell
$ ./client <PID> <message>
```

By launching it, this will show <message> on the server window.

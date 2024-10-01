import express from "express";
import bodyParser from "body-parser";
import path from "path";
import fs from "fs";

// create express app
const app = express();
const port = 3001;

// basic configuration
app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended: true }));
app.use(express.static("public"));

/**** interface routes ****/
app.get("/", (req, res) => {
  res.send("Hello World");
});

/**** api routes ****/
// get current state of the led
app.get("/api/led/state", (req, res) => {});
// set the state of the led
app.post("/api/led/state", (req, res) => {});

app.listen(port, () => {
  console.log(`Server running on port ${port}`);
});
